# Created by: Stefan Walter <swalter@lettermax.de>
# $FreeBSD: head/misc/vifm/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	vifm
PORTVERSION=	0.9.1
DISTVERSIONPREFIX=	v
CATEGORIES=	misc

MAINTAINER=	mp39590@gmail.com
COMMENT=	Ncurses based file manager with vi like keybindings

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		desktop-file-utils gmake ncurses
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-gtk

USE_GITHUB=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
