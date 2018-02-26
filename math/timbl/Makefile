# Created by: Yuri Victorovich <yuri@tsoft.com>
# $FreeBSD: head/math/timbl/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	timbl
PORTVERSION=	6.4.2
PORTREVISION=	2
CATEGORIES=	math
MASTER_SITES=	http://ilk.uvt.nl/downloads/pub/software/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Tilburg Memory Based Learner

LIB_DEPENDS=	libxml2.so:textproc/libxml2

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gmake libtool pathfix pkgconfig
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} 's#doc/@PACKAGE@/examples#examples/@PACKAGE@#' ${WRKSRC}/demos/Makefile.in

.include <bsd.port.mk>
