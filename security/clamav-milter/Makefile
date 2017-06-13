# Created by: bz
# $FreeBSD: head/security/clamav-milter/Makefile 424560 2016-10-24 10:18:50Z mat $

PKGNAMESUFFIX=	-milter

OPTIONS_SLAVE+=	MILTER

MASTERDIR=	${.CURDIR}/../clamav
PKGNAMESUFFIX=	-milter

CONFLICTS=	clamav-[0-9]*

.include "${MASTERDIR}/Makefile"
