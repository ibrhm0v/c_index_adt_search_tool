
#include <string.h>

#include "index.h"
#include "map.h"
#include "printing.h"
#include "trie.h"

/*
 * Implement your index here.
 */
struct index
{
    map_t *map;
};

struct search_result
{
};

// Compare to ints
static inline int cmp_ints(void *a, void *b)
{
    return *((int *)a) - *((int *)b);
}

// Compares two strings without case-sensitivity
static inline int cmp_strs(void *a, void *b)
{
    return strcasecmp((const char *)a, (const char *)b);
}

index_t *index_create()
{
    // Allocate memoery for the index
    index_t *index = malloc(sizeof(index_t));
    if (index == NULL)
    {
        DEBUG_PRINT("No memory allocated for creating index\n");
        return NULL;
    }

    index->map = map_create(compare_strings, hash_string);

    return index;
}

void index_destroy(index_t *index)
{
    free(index);
}

/*
 * Adds all the words from the given document to the given index.
 * This function is responsible for deallocating the list and the document name after use.
 */
void index_add_document(index_t *idx, char *document_name, list_t *words)
{
}

/*
 * Finds a query in the documents in the index.
 * The result is returned as a search_result_t which is later used to iterate the results.
 */

search_result_t *index_find(index_t *idx, char *query)
{
}

/*
 * Autocomplete searches the given trie for a word containing input.
 * The input string is NULL terminated and contains size letters (excluding null termination).
 * The output string MUST be null terminated.
 */
char *autocomplete(index_t *idx, char *input, size_t size)
{
    return NULL;
}
/*
 * Return the content of the current document.
 * Subsequent calls to this function should return the next document.
 * This function should only be called once for each document.
 * This function should return NULL if there are no more documents.
 */
char **result_get_content(search_result_t *res)
{
    return NULL;
}

/*
 * Get the length of the current document.
 * Subsequent calls should return the length of the same document.
 */
int result_get_content_length(search_result_t *res)
{
    return NULL;
}

/*
 * Get the next result from the current query.
 * The result should be returned as an int, which is the index in the document content.
 * Should return NULL at the end of the search results.
 */

search_hit_t *result_next(search_result_t *res)
{
    return NULL;
}
