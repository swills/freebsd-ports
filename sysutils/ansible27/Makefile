# $FreeBSD$

PORTVERSION=	2.7.18
PKGNAMESUFFIX=	27

CONFLICTS=	*ansible-2* \
		*ansible1-* \
		*ansible23-* \
		*ansible24-* \
		*ansible25-* \
		*ansible26-* \
		*ansible28-* \
		*ansible29-* \

MASTERDIR=	${.CURDIR}/../ansible29
DISTINFO_FILE=	${.CURDIR}/distinfo

USES=		cpe python
EXTRA_PATCHES=	${FILESDIR}/extra-patch-sesu \
		${FILESDIR}/extra-patch-27

.include "${MASTERDIR}/Makefile"
