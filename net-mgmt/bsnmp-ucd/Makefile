# Created by: Mikolaj Golub <to.my.trociny@gmail.com>
# $FreeBSD: head/net-mgmt/bsnmp-ucd/Makefile 479407 2018-09-10 13:15:47Z mat $

PORTNAME=	bsnmp-ucd
PORTVERSION=	0.4.2
CATEGORIES=	net-mgmt

MAINTAINER=	trociny@FreeBSD.org
COMMENT=	bsnmpd module that implements parts of UCD-SNMP-MIB

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	trociny

USES=		uidfix
MAKE_ENV+=	NO_OBJ=yes

OPTIONS_DEFINE=	EXAMPLES

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/snmpd.config.sample ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
