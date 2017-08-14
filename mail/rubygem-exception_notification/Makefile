# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/mail/rubygem-exception_notification/Makefile 447903 2017-08-13 16:40:24Z sunpoet $

PORTNAME=	exception_notification
PORTVERSION=	4.2.2
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Exception notification for Rails apps

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionmailer4>=4.0:mail/rubygem-actionmailer4 \
		rubygem-activesupport4>=4.0:devel/rubygem-activesupport4

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
