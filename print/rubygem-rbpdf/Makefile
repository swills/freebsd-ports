# Created by: Michael Moll <kvedulv at kvedulv.de>
# $FreeBSD: head/print/rubygem-rbpdf/Makefile 438087 2017-04-09 09:04:12Z sunpoet $

PORTNAME=	rbpdf
PORTVERSION=	1.19.2
CATEGORIES=	print rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library for creating ERB enabled PDF templates

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.TXT

RUN_DEPENDS=	rubygem-htmlentities>=0:textproc/rubygem-htmlentities \
		rubygem-rbpdf-font>=${PORTVERSION:R}:print/rubygem-rbpdf-font

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
