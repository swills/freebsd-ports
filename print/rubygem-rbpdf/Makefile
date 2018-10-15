# Created by: Michael Moll <kvedulv at kvedulv.de>
# $FreeBSD: head/print/rubygem-rbpdf/Makefile 482079 2018-10-14 16:31:30Z sunpoet $

PORTNAME=	rbpdf
PORTVERSION=	1.19.6
CATEGORIES=	print rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library for creating ERB enabled PDF templates

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.TXT

RUN_DEPENDS=	rubygem-htmlentities>=0:textproc/rubygem-htmlentities \
		rubygem-rbpdf-font>=${PORTVERSION:R}:print/rubygem-rbpdf-font

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
