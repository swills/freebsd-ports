# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/devel/p5-Minion/Makefile 451975 2017-10-13 09:20:52Z sunpoet $

PORTNAME=	Minion
PORTVERSION=	7.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SRI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Asynchronous job queue for Mojolicious

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Mojolicious>=7.29:www/p5-Mojolicious
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	PGSQL

PGSQL_BUILD_DEPENDS=	p5-Mojo-Pg>=4.0:databases/p5-Mojo-Pg
PGSQL_RUN_DEPENDS=	${PGSQL_BUILD_DEPENDS}

.include <bsd.port.mk>
