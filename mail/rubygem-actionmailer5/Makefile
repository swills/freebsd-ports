# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/mail/rubygem-actionmailer5/Makefile 447364 2017-08-04 20:08:16Z sunpoet $

PORTNAME=	actionmailer
PORTVERSION=	5.1.3
CATEGORIES=	mail rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	5

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Easy email delivery and testing for Ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack5>=${PORTVERSION}:www/rubygem-actionpack5 \
		rubygem-actionview5>=${PORTVERSION}:devel/rubygem-actionview5 \
		rubygem-activejob5>=${PORTVERSION}:devel/rubygem-activejob5 \
		rubygem-mail>=2.5.4:mail/rubygem-mail \
		rubygem-rails-dom-testing-rails5>=2.0:textproc/rubygem-rails-dom-testing-rails5

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
