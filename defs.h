#ifndef TYPEDEFS_H
#define TYPEDEFS_H

/**
 * enum _bool - enumeration to use true and false
 * @false: 0
 * @true: 1
 */
typedef enum _bool
{
	false = 0,
	true = 1
} Bool;

typedef enum errors
{
	READLINE = 0
} Errors;

/**
 * struct alias_s - defines aliases
 * @name: alias' name
 * @value: alias' value
 * @next: a pointer to the next alias
 */
typedef struct alias_s
{
	char *name;
	char *value;
	struct alias_s *next;
} alias_t;

#endif /* TYPEDEFS_H */
