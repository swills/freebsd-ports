# Created by: Torsten Zuehlsdorff <tz@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-html2text/Makefile 450835 2017-09-28 11:01:37Z sunpoet $

PORTNAME=	html2text
PORTVERSION=	0.2.1
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
