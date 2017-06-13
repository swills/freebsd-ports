# Created by: Alex Pesternikov <ap@page2rss.com>
# $FreeBSD: head/www/ctemplate/Makefile 441819 2017-05-27 00:20:19Z linimon $

PORTNAME=	ctemplate
PORTVERSION=	0.5
CATEGORIES=	www textproc
MASTER_SITES=	SF

MAINTAINER=	ap@page2rss.com
COMMENT=	Template system for C

BROKEN_armv6=		fails to compile: assigning to char * from incompatible type const char *

USES=		gmake
GNU_CONFIGURE=	yes

PLIST_FILES+=	bin/h2ap

.include <bsd.port.mk>
