# Created by: Matthias Andree <mandree@FreeBSD.org>
# $FreeBSD: head/security/putty-nogtk/Makefile 428696 2016-12-16 20:30:31Z mandree $

PKGNAMESUFFIX=		-nogtk

OPTIONS_EXCLUDE=	GTK2

CONFLICTS_INSTALL=	pssh-[0-9]* putty-[0-9]*

MASTERDIR=		${.CURDIR}/../../security/putty

.include "${MASTERDIR}/Makefile"
