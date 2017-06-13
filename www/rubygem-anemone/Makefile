# Created by: niels <niels@FreeBSD.org>
# $FreeBSD: head/www/rubygem-anemone/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	anemone
PORTVERSION=	0.7.2
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Library that allows programs to spider websites

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-nokogiri>=1.3.0:textproc/rubygem-nokogiri \
		rubygem-robotex>=1.0.0:www/rubygem-robotex

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/anemone

.include <bsd.port.mk>
