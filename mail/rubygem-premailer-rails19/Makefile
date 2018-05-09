# $FreeBSD: head/mail/rubygem-premailer-rails19/Makefile 469442 2018-05-09 10:43:26Z mfechner $

PORTNAME=	premailer-rails
PORTVERSION=	1.9.7
CATEGORIES=	mail rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	19

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Improve the rendering of HTML emails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-actionmailer4>=3:mail/rubygem-actionmailer4 \
		rubygem-premailer>=1.7.9:mail/rubygem-premailer

PORTSCOUT=	limit=^1\.9

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
