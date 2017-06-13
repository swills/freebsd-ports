# Created by: Wouter Reckman <gennerate@zonnet.nl>
# $FreeBSD: head/games/enygma/Makefile 426604 2016-11-20 16:43:17Z marino $

PORTNAME=	enygma
PORTVERSION=	1.04
CATEGORIES=	games
MASTER_SITES=	http://www.chiark.greenend.org.uk/~sgtatham/enigma/
DISTNAME=	enigma-${DISTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Text-based puzzle game

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE

USES=		ncurses
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--localstatedir=/var/games
CPPFLAGS+=	-I${NCURSESINC} -I${LOCALBASE}/include

.include <bsd.port.mk>
