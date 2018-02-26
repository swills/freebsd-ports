# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/sysutils/ncdu/Makefile 462874 2018-02-24 22:42:50Z tobik $

PORTNAME=	ncdu
PORTVERSION=	1.13
CATEGORIES=	sysutils
MASTER_SITES=	http://dev.yorhel.nl/download/

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Ncurses du(1)

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		ncurses
GNU_CONFIGURE=	yes
PLIST_FILES=	bin/${PORTNAME} \
		man/man1/${PORTNAME}.1.gz

.include <bsd.port.mk>
