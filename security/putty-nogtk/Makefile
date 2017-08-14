# Created by: Matthias Andree <mandree@FreeBSD.org>
# $FreeBSD: head/security/putty-nogtk/Makefile 447748 2017-08-11 08:45:02Z mandree $

PKGNAMESUFFIX=		-nogtk

OPTIONS_EXCLUDE=	GTK3

CONFLICTS_INSTALL=	pssh-[0-9]* putty-[0-9]*

MASTERDIR=		${.CURDIR}/../../security/putty

.include "${MASTERDIR}/Makefile"
