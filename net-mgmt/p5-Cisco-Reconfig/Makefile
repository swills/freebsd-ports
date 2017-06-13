# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/net-mgmt/p5-Cisco-Reconfig/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Cisco-Reconfig
PORTVERSION=	0.911
PORTREVISION=	1
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Parse and generate Cisco configuration files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-IO-String>=0:devel/p5-IO-String
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
