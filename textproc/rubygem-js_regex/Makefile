# Created by: Matthias Fechner <mfechner@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-js_regex/Makefile 494399 2019-03-02 12:02:23Z mfechner $

PORTNAME=	js_regex
PORTVERSION=	3.1.1
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Convert ruby native regular expressions for JavaScript

LICENSE=	MIT

RUN_DEPENDS=	rubygem-character_set>=1.1.0:textproc/rubygem-character_set \
		rubygem-regexp_parser>=1.1.0:textproc/rubygem-regexp_parser \
		rubygem-regexp_property_values>=0.3:textproc/rubygem-regexp_property_values

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
