# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: head/devel/rubygem-activesupport4/Makefile 435280 2017-03-02 18:01:04Z sunpoet $

PORTNAME=	activesupport
PORTVERSION=	4.2.8
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Utility classes and extension that are required by Rails MVC Framework

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-i18n>=0.7:devel/rubygem-i18n \
		rubygem-minitest>=5.1:devel/rubygem-minitest \
		rubygem-thread_safe>=0.3.4:devel/rubygem-thread_safe \
		rubygem-tzinfo>=1.1:devel/rubygem-tzinfo

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
