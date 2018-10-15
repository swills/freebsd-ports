# Created by: rpsfa@rit.edu
# $FreeBSD: head/devel/rubygem-simple_form/Makefile 481488 2018-10-07 20:02:35Z sunpoet $

PORTNAME=	simple_form
PORTVERSION=	4.0.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Forms made easy

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activemodel4>=4:databases/rubygem-activemodel4 \
		rubygem-actionpack4>=4:www/rubygem-actionpack4

PORTSCOUT=	ignore:1

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
