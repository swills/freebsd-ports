# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/www/p5-WebService-CIA/Makefile 432932 2017-01-31 16:21:45Z mat $

PORTNAME=	WebService-CIA
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Information from the CIA World Factbook

RUN_DEPENDS=	p5-Crypt-SSLeay>=0:security/p5-Crypt-SSLeay \
		p5-libwww>=0:www/p5-libwww \
		p5-MLDBM>=0:databases/p5-MLDBM
BUILD_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild
CONFIGURE_ARGS=	</dev/null

.include <bsd.port.mk>
