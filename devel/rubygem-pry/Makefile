# Created by: Shin-ya MURAKAMI <murashin@gfd-dennou.org>
# $FreeBSD: head/devel/rubygem-pry/Makefile 450266 2017-09-21 15:29:13Z sunpoet $

PORTNAME=	pry
PORTVERSION=	0.11.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	IRB alternative and runtime developer console

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-coderay>=1.1.0:textproc/rubygem-coderay \
		rubygem-method_source>=0.8.1:devel/rubygem-method_source

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/pry

.include <bsd.port.mk>
