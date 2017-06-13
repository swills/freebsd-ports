# Created by: Torsten Zuehlsdorff <ports@toco-domains.de>
# $FreeBSD: head/mail/rubygem-premailer-rails/Makefile 439248 2017-04-23 17:10:06Z sunpoet $

PORTNAME=	premailer-rails
PORTVERSION=	1.9.6
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Improve the rendering of HTML emails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-actionmailer4>=3:mail/rubygem-actionmailer4 \
		rubygem-premailer>=1.7.9:mail/rubygem-premailer

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
