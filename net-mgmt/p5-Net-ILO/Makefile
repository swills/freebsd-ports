# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: head/net-mgmt/p5-Net-ILO/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Net-ILO
PORTVERSION=	0.54
PORTREVISION=	1
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Interface to HP Integrated Lights-Out

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-IO-Socket-SSL>0:security/p5-IO-Socket-SSL \
		p5-XML-Simple>0:textproc/p5-XML-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
