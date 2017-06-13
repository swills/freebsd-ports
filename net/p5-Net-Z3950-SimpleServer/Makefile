# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/net/p5-Net-Z3950-SimpleServer/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Net-Z3950-SimpleServer
PORTVERSION=	1.20
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Perl module for developing Z39.50 servers

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libyaz.so:net/yaz

USES=		perl5 shebangfix
SHEBANG_FILES=	ztest.pl grs_test.pl logging-server.pl
USE_PERL5=	configure
CONFIGURE_ENV=	LOCALBASE=${LOCALBASE}

.include <bsd.port.mk>
