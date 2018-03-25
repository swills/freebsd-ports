# Created by: Torsten Zuehlsdorff <ports@toco-domains.de>
# $FreeBSD: head/mail/rubygem-premailer-rails-rails5/Makefile 464704 2018-03-16 15:21:45Z sunpoet $

PORTNAME=	premailer-rails
PORTVERSION=	1.10.2
CATEGORIES=	mail rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Improve the rendering of HTML emails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-actionmailer5>=3:mail/rubygem-actionmailer5 \
		rubygem-premailer>=1.7.9:mail/rubygem-premailer

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
