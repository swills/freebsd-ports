# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/www/rubygem-rdf/Makefile 448883 2017-08-28 19:18:41Z sunpoet $

PORTNAME=	rdf
PORTVERSION=	2.2.9
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Pure-Ruby library for working with RDF data

LICENSE=	UNLICENSE
LICENSE_FILE=	${WRKSRC}/UNLICENSE

RUN_DEPENDS=	rubygem-hamster>=3.0:devel/rubygem-hamster \
		rubygem-link_header>=0.0.8:www/rubygem-link_header

USE_RUBY=	yes
USES=		gem
NO_ARCH=	yes

PLIST_FILES=	bin/rdf

.include <bsd.port.mk>
