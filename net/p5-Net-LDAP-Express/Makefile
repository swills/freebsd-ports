# Created by: Zane C, Bowers <vvelox@vvelox.net>
# $FreeBSD: head/net/p5-Net-LDAP-Express/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Net-LDAP-Express
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	Module to simplify connecting up to a LDAP server

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-perl-ldap>=0.23:net/p5-perl-ldap
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
