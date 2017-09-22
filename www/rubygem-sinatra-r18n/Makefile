# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/www/rubygem-sinatra-r18n/Makefile 450269 2017-09-21 15:29:29Z sunpoet $

PORTNAME=	sinatra-r18n
PORTVERSION=	2.1.8
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Sinatra extension that provides i18n support to your web application

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-r18n-core>=${PORTVERSION}:devel/rubygem-r18n-core \
		rubygem-sinatra>=1.3:www/rubygem-sinatra

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
