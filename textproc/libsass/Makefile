# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/textproc/libsass/Makefile 449591 2017-09-10 20:55:38Z gerald $

PORTNAME=	libsass
PORTVERSION=	3.4.4
PORTREVISION=	1
CATEGORIES=	textproc

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	C/C++ implementation of a Sass compiler

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	sass

USES=		autoreconf compiler:c++11-lib gmake libtool pathfix
GNU_CONFIGURE=	yes
MAKEFILE=	GNUmakefile
PATHFIX_MAKEFILEIN=	GNUmakefile.am
INSTALL_TARGET=	install-strip

USE_LDCONFIG=	yes

post-patch:
	@${ECHO_CMD} "${ECHO_CMD} \"${PORTVERSION}\"" > ${WRKSRC}/version.sh

.include <bsd.port.mk>
