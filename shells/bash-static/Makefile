# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/shells/bash-static/Makefile 484322 2018-11-06 20:22:07Z ehaupt $

MASTERDIR=	${.CURDIR}/../../shells/bash

OPTIONS_SLAVE=	STATIC

PKGNAMESUFFIX=	-static

BROKEN_FreeBSD_13=	fails to configure: cannot compute sizeof (char)

.include "${MASTERDIR}/Makefile"
