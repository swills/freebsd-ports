# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/www/rubygem-sinatra-r18n/Makefile 467191 2018-04-12 18:33:44Z sunpoet $

PORTNAME=	sinatra-r18n
PORTVERSION=	3.0.3
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
