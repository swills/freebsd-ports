# Created by: Torsten Zuehlsdorff <tz@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-html2text/Makefile 435757 2017-03-09 14:25:12Z tz $

PORTNAME=	html2text
PORTVERSION=	0.2.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Convert HTML into a plain text format

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-nokogiri>=1.6:textproc/rubygem-nokogiri

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
