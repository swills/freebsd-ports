# Created by: ijliao
# $FreeBSD: head/chinese/p5-Lingua-ZH-TaBE/Makefile 458513 2018-01-09 07:40:55Z mat $

PORTNAME=	Lingua-ZH-TaBE
PORTVERSION=	0.07
PORTREVISION=	5
CATEGORIES=	chinese perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Chinese processing via libtabe

LIB_DEPENDS=	libtabe.so:chinese/libtabe

USES=		bdb perl5
USE_PERL5=	configure

OBSOLETE_BDB_VAR=	WITH_DB

CONFIGURE_ARGS=	DB="${BDB_LIB_NAME}"

.include <bsd.port.mk>
