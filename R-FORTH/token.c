#include "token.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Function to create a new token
token_t* create_token(token_type_t type, const char* text) {
    token_t* token = (token_t*)malloc(sizeof(token_t));
    if (token == NULL) {
        fprintf(stderr, "Error: Failed to allocate memory for token.\n");
        exit(EXIT_FAILURE);
    }

    token->type = type;

    // Check if the text parameter is not NULL
    if (text != NULL) {
        token->text = strdup(text);
        if (token->text == NULL) {
            fprintf(stderr, "Error: Failed to allocate memory for token text.\n");
            free(token);
            exit(EXIT_FAILURE);
        }
    } else {
       
        token->text = NULL;
    }

    return token;
}

// Function to free memory allocated for a token
void free_token(token_t* token) {
    if (token != NULL) {
        free(token->text);
        free(token);
    }
}

// Function to convert token type to string
const char *token_type_t_string(token_type_t type) {
    switch (type) {
        case NUMBER:
            return "Number";
        case OPERATOR:
            return "Operator";
        case SYMBOL:
            return "Symbol";
        case WORD:
            return "Word";
        default:
            return "Unknown";
    }
}
