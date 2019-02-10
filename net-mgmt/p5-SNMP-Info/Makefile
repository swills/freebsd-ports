# Created by: arved
# $FreeBSD: head/net-mgmt/p5-SNMP-Info/Makefile 492599 2019-02-10 11:16:36Z pi $

PORTNAME=	SNMP-Info
PORTVERSION=	3.64
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Perl5 module for gathering information from network devices

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS=	libnetsnmp.so:net-mgmt/net-snmp
RUN_DEPENDS=	p5-PPI>0:textproc/p5-PPI \
		p5-Module-Info>0:devel/p5-Module-Info \
		p5-Class-ISA>0:devel/p5-Class-ISA

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	yes

.include <bsd.port.mk>
