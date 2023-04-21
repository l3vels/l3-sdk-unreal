#!/bin/bash

OPEN_API_URL="${OPEN_API_URL:-"https://api-dev.l3vels.xyz/docs-json"}"
PACKAGE_VERSION=$PACKAGE_VERSION
COMMIT_NAME="${COMMIT_NAME:-"fix: api changes"}"

USERNAME="${USERNAME:-"Giga Chkhikvadze"}"
USER_EMAIL="${USER_EMAIL:-"giga.chkhikvadze@gmail.com"}"

# Set the OpenAPI Generator options
OUTPUT_DIR="$(pwd)"


# Generate the client or server code
npx @openapitools/openapi-generator-cli generate -i "$OPEN_API_URL" -c openapitools.json -o "$OUTPUT_DIR"

# Set Git user
git config user.name "$USERNAME"
git config user.email "$USER_EMAIL"

echo git diff-index --quiet HEAD --;
Check if changes exist
if [[ -z $(git status --porcelain) ]]; then
    echo "No changes detected."
else
    echo "Changes are detected."
    # Add, commit, and push the changes
    git add .
    git commit -m "$COMMIT_NAME"
    git pull --rebase origin main
    git push origin HEAD
fi


