# Created by: Matthias Andree <mandree@FreeBSD.org>
# $FreeBSD: head/security/putty-nogtk/Makefile 466267 2018-04-02 21:29:16Z mandree $

PKGNAMESUFFIX=		-nogtk

OPTIONS_EXCLUDE=	GTK2 GTK3

CONFLICTS_INSTALL=	pssh-[0-9]* putty-[0-9]* putty-gtk2-[0-9]*

MASTERDIR=		${.CURDIR}/../../security/putty

.include "${MASTERDIR}/Makefile"
