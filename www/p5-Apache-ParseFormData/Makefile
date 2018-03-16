# Created by: Jon Nistor <nistor@snickers.org>
# $FreeBSD: head/www/p5-Apache-ParseFormData/Makefile 464189 2018-03-11 17:38:45Z brnrd $

PORTNAME=	Apache-ParseFormData
PORTVERSION=	0.09
PORTREVISION=	3
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	nistor@snickers.org
COMMENT=	Module allows you to easily decode/parse form and query data

BUILD_DEPENDS=	${APACHE_PKGNAMEPREFIX}mod_perl2>=0:www/mod_perl2
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		apache:2.2+ perl5
USE_PERL5=	configure

post-patch:
	@${FIND} ${WRKSRC} -name "*.orig" -delete

.include <bsd.port.mk>
