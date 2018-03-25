# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/textproc/sassc/Makefile 465395 2018-03-23 18:31:54Z yuri $

PORTNAME=	sassc
PORTVERSION=	3.4.8
PORTREVISION=	1
CATEGORIES=	textproc

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Wrapper around libsass

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libsass.so:textproc/libsass

GH_ACCOUNT=	sass
GNU_CONFIGURE=	yes

MAKEFILE=	GNUmakefile

PLIST_FILES=	bin/sassc

USES=		autoreconf compiler:c++11-lib gmake libtool localbase
USE_GITHUB=	yes

post-patch:
	@${ECHO_CMD} "${ECHO_CMD} \"${PORTVERSION}\"" > ${WRKSRC}/version.sh

.include <bsd.port.mk>
