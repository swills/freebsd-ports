# Created by: Yi-Jheng, Lin <yzlin@cs.nctu.edu.tw>
# $FreeBSD: head/net/p5-BBS-Client/Makefile 471658 2018-06-04 18:10:27Z sunpoet $

PORTNAME=	BBS-Client
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CORNELIUS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Client Module For BBS Systems

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-Telnet>=0:net/p5-Net-Telnet
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
