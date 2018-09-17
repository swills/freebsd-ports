# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/net-mgmt/p5-Tie-NetAddr-IP/Makefile 479390 2018-09-10 11:16:59Z des $

PORTNAME=	Tie-NetAddr-IP
PORTVERSION=	1.51
PORTREVISION=	1
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Tie::NetAddr::IP - Implements a Hash where the key is a subnet

BUILD_DEPENDS=	p5-NetAddr-IP>0:net-mgmt/p5-NetAddr-IP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
