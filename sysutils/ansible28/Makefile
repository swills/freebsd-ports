# $FreeBSD$

PORTVERSION=	2.8.16
PKGNAMESUFFIX=	28

CONFLICTS=	*ansible-2* \
		*ansible1-* \
		*ansible23-* \
		*ansible24-* \
		*ansible25-* \
		*ansible26-* \
		*ansible27-* \
		*ansible29-*

MASTERDIR=	${.CURDIR}/../ansible29
DISTINFO_FILE=	${.CURDIR}/distinfo

USES=		cpe python
EXTRA_PATCHES=

.include "${MASTERDIR}/Makefile"
