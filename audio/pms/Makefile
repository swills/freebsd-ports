# Created by: Ashish SHUKLA <wahjava@gmail.com>
# $FreeBSD: head/audio/pms/Makefile 459315 2018-01-18 04:11:02Z jbeich $

PORTNAME=	pms
PORTVERSION=	0.42
PORTREVISION=	8
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	riggs@FreeBSD.org
COMMENT=	ncurses-based client for the Music Player Daemon

LICENSE=	GPLv3

USES=		gettext ncurses pkgconfig tar:bzip2
GNU_CONFIGURE=	yes
USE_GNOME=	glib20

PLIST_FILES=	bin/${PORTNAME} \
		man/man1/pms.1.gz

CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

OPTIONS_DEFINE=	REGEX

REGEX_DESC=	Support boost regex pattern matching

REGEX_LIB_DEPENDS=	libboost_regex.so:devel/boost-libs
REGEX_CONFIGURE_ENABLE=	regex

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
