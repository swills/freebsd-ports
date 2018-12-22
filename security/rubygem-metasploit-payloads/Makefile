# $FreeBSD: head/security/rubygem-metasploit-payloads/Makefile 488022 2018-12-21 20:27:26Z antoine $

PORTNAME=	metasploit-payloads
PORTVERSION=	1.3.56
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Compiled binaries for Metasploit's Meterpreter

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
NO_ARCH_IGNORE=	libndkstager.so
STRIP=
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
