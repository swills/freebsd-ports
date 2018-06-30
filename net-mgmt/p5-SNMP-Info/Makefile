# Created by: arved
# $FreeBSD: head/net-mgmt/p5-SNMP-Info/Makefile 473332 2018-06-25 19:02:35Z jadawin $

PORTNAME=	SNMP-Info
PORTVERSION=	3.61
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Perl5 module for gathering information from network devices

LICENSE=	BSD3CLAUSE

DEPENDS=	p5-PPI>0:textproc/p5-PPI \
		p5-Module-Info>0:devel/p5-Module-Info \
		p5-Class-ISA>0:devel/p5-Class-ISA

LIB_DEPENDS=	libnetsnmp.so:net-mgmt/net-snmp
RUN_DEPENDS=	p5-PPI>0:textproc/p5-PPI \
		p5-Module-Info>0:devel/p5-Module-Info \
		p5-Class-ISA>0:devel/p5-Class-ISA
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	yes

.include <bsd.port.mk>
