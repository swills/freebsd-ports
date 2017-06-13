# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: head/net/p5-Net-SSH-Expect/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Net-SSH-Expect
PORTVERSION=	1.09
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	SSH wrapper to execute remote commands

RUN_DEPENDS=	p5-Expect>=0:lang/p5-Expect
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
