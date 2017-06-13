# Created by: Alex Kapranoff <kappa@FreeBSD.org.ua>
# $FreeBSD: head/textproc/p5-NetAddr-IP-Find/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	NetAddr-IP-Find
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Iterates over all IP addresses in a text similar to Email::Find

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-NetAddr-IP>0:net-mgmt/p5-NetAddr-IP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
INSTALL_TARGET=	pure_install

.include <bsd.port.mk>
