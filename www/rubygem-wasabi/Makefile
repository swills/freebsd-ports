# Created by: Joseph Benden <joe@thrallingpenguin.com>
# $FreeBSD: head/www/rubygem-wasabi/Makefile 446802 2017-07-28 02:41:36Z sunpoet $

PORTNAME=	wasabi
PORTVERSION=	3.5.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	joe@thrallingpenguin.com
COMMENT=	Library for simple WSDL parsing

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-httpi>=2.0:www/rubygem-httpi \
		rubygem-nokogiri>=1.4.2:textproc/rubygem-nokogiri

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
